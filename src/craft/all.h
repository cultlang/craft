#pragma once
#include "craft/common.h"

namespace cultlang {
namespace craft 
{
	extern ::craft::lisp::BuiltinModuleDescription BuiltinCraft;

	CULTLANG_CRAFT_EXPORTED::craft::instance<::craft::lisp::Module> make_craft_bindings(::craft::instance<::craft::lisp::Namespace> ns, ::craft::instance<> loader);
}}
