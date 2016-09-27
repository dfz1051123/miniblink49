#ifndef base_process_CallAddrsRecord_h
#define base_process_CallAddrsRecord_h

#include <xmmintrin.h>
#include <map>
#include <set>

class CallAddrsRecord {
public:
    CallAddrsRecord()
    {
        ::InitializeCriticalSection(&m_mutex);
    }

    ~CallAddrsRecord()
    {
        ::DeleteCriticalSection(&m_mutex);
    }

    void recordMalloc(void* ptrAddr, void* funcAddr, bool canRecover)
    {
        ::EnterCriticalSection(&m_mutex);
        std::map<void*, void*>::iterator it = m_callAddrs.find(ptrAddr);
        if (it != m_callAddrs.end()) {
            ASSERT(canRecover);
            it->second = funcAddr;
        }
        else {
            ASSERT(!canRecover);
            m_callAddrs.insert(std::pair<void*, void*>(ptrAddr, funcAddr));
        }
        ::LeaveCriticalSection(&m_mutex);
    }

    void recordRealloc(void* oldPtrAddr, void* newPtrAddr, void* funcAddr)
    {
        ::EnterCriticalSection(&m_mutex);
        std::map<void*, void*>::iterator it = m_callAddrs.find(oldPtrAddr);
        if (it == m_callAddrs.end())
            DebugBreak();
        m_callAddrs.erase(it);
        m_callAddrs.insert(std::pair<void*, void*>(newPtrAddr, funcAddr));
        ::LeaveCriticalSection(&m_mutex);
    }

    void recordFree(void* ptrAddr, void* funcAddr)
    {
        ::EnterCriticalSection(&m_mutex);
        std::map<void*, void*>::iterator it = m_callAddrs.find(ptrAddr);
        if (it == m_callAddrs.end())
            DebugBreak();
        m_callAddrs.erase(it);
        ::LeaveCriticalSection(&m_mutex);
    }

private:
    CRITICAL_SECTION m_mutex;
    std::map<void*, void*> m_callAddrs;
};

extern CallAddrsRecord* g_callAddrsRecord;

#define RECORD_MALLOC(ptrAddr, canRecover) \
    if (!g_callAddrsRecord) \
        g_callAddrsRecord = new CallAddrsRecord(); \
    g_callAddrsRecord->recordMalloc(ptrAddr, _ReturnAddress(), canRecover);

#define RECORD_FREE(ptrAddr) \
    g_callAddrsRecord->recordFree(ptrAddr, _ReturnAddress());

#define RECORD_REALLOC(oldPtrAddr, newPtrAddr) \
    g_callAddrsRecord->recordRealloc(oldPtrAddr, newPtrAddr, _ReturnAddress());

#endif // base_process_CallAddrsRecord_h