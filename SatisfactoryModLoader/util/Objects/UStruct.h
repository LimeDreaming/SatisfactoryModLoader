#pragma once

#include <Lib.h>

#include "UField.h"
#include "TArray.h"

namespace SML {
	namespace Objects {
		/**
		* Representation of UStruct used by Unreal
		*/
		SML_API class UStruct : public UField {
		public:
			class UStruct* super;
			UField* childs;
			int32_t propSize;
			int32_t minAlig;
			TArray<uint8_t> script;
			class UProperty* prop;
			class UProperty* ref;
			class UProperty* destructor;
			class UProperty* constructor;
			TArray<UObject*> scriptObjRef;

			/**
			* returns the UClass of UStruct
			*/
			SML_API static UClass* staticClass() {
				static auto ptr = UObject::findClass("Class CoreUObject.Struct");
				return ptr;
			}
		};
	}
}