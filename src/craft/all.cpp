#include "craft/common.h"

#include "all.h"

#include "lisp/library/system/prelude.h"
#include "lisp/semantics/cult/calling.h"


using namespace craft;
using namespace craft::lisp;
using namespace craft::types;



#define lMM semantics->builtin_implementMultiMethod

#include "typedefs.h"


instance<Module> cultlang::craft::make_craft_bindings(instance<lisp::Namespace> ns, instance<> loader)
{
	auto ret = instance<Module>::make(ns, loader);
	auto sem = instance<CultSemantics>::make(ret);
	ret->builtin_setSemantics(sem);

	auto semantics = ret->require<CultSemantics>();

	lMM("/craft/version", []() { return instance<std::string>::make("0.0.1");});
	
	return ret;
}

BuiltinModuleDescription cultlang::craft::BuiltinCraft("cult/craft", cultlang::craft::make_craft_bindings);


#include "types/dll_entry.inc"
