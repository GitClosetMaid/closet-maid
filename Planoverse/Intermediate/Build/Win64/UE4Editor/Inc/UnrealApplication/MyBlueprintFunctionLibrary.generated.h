// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALAPPLICATION_MyBlueprintFunctionLibrary_generated_h
#error "MyBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in MyBlueprintFunctionLibrary.h"
#endif
#define UNREALAPPLICATION_MyBlueprintFunctionLibrary_generated_h

#define UnrealApplication_Source_UnrealApplication_MyBlueprintFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllSaveGameSlotNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UMyBlueprintFunctionLibrary::GetAllSaveGameSlotNames(); \
		P_NATIVE_END; \
	}


#define UnrealApplication_Source_UnrealApplication_MyBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllSaveGameSlotNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UMyBlueprintFunctionLibrary::GetAllSaveGameSlotNames(); \
		P_NATIVE_END; \
	}


#define UnrealApplication_Source_UnrealApplication_MyBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMyBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealApplication"), NO_API) \
	DECLARE_SERIALIZER(UMyBlueprintFunctionLibrary)


#define UnrealApplication_Source_UnrealApplication_MyBlueprintFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMyBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealApplication"), NO_API) \
	DECLARE_SERIALIZER(UMyBlueprintFunctionLibrary)


#define UnrealApplication_Source_UnrealApplication_MyBlueprintFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyBlueprintFunctionLibrary(UMyBlueprintFunctionLibrary&&); \
	NO_API UMyBlueprintFunctionLibrary(const UMyBlueprintFunctionLibrary&); \
public:


#define UnrealApplication_Source_UnrealApplication_MyBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyBlueprintFunctionLibrary(UMyBlueprintFunctionLibrary&&); \
	NO_API UMyBlueprintFunctionLibrary(const UMyBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyBlueprintFunctionLibrary)


#define UnrealApplication_Source_UnrealApplication_MyBlueprintFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define UnrealApplication_Source_UnrealApplication_MyBlueprintFunctionLibrary_h_12_PROLOG
#define UnrealApplication_Source_UnrealApplication_MyBlueprintFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealApplication_Source_UnrealApplication_MyBlueprintFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealApplication_Source_UnrealApplication_MyBlueprintFunctionLibrary_h_15_RPC_WRAPPERS \
	UnrealApplication_Source_UnrealApplication_MyBlueprintFunctionLibrary_h_15_INCLASS \
	UnrealApplication_Source_UnrealApplication_MyBlueprintFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealApplication_Source_UnrealApplication_MyBlueprintFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealApplication_Source_UnrealApplication_MyBlueprintFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealApplication_Source_UnrealApplication_MyBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealApplication_Source_UnrealApplication_MyBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	UnrealApplication_Source_UnrealApplication_MyBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALAPPLICATION_API UClass* StaticClass<class UMyBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealApplication_Source_UnrealApplication_MyBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
