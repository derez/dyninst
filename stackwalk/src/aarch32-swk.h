#ifndef aarch32_swk_h_
#define aarch32_swk_h_

#include "stackwalk/h/steppergroup.h"
#include "stackwalk/h/framestepper.h"

#include "common/h/dyntypes.h"

#include "common/src/lru_cache.h"

namespace Dyninst {
namespace Stackwalker {

class aarch32_LookupFuncStart : public FrameFuncHelper
{
private:
   static std::map<Dyninst::PID, aarch32_LookupFuncStart*> all_func_starts;
   aarch32_LookupFuncStart(ProcessState *proc_);
   int ref_count;

   void updateCache(Address addr, FrameFuncHelper::alloc_frame_t result);
   bool checkCache(Address addr, FrameFuncHelper::alloc_frame_t &result);
   // We need some kind of re-entrant safe synhronization before we can
   // globally turn this caching on, but it would sure help things.
   static const unsigned int cache_size = 64;
   LRUCache<Address, FrameFuncHelper::alloc_frame_t> cache;
public:
   static aarch32_LookupFuncStart *getLookupFuncStart(ProcessState *p);
   void releaseMe();
   virtual FrameFuncHelper::alloc_frame_t allocatesFrame(Address addr);
   ~aarch32_LookupFuncStart();
   static void clear_func_mapping(Dyninst::PID);
};

}
}


#endif
