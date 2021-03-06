// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class Aprop_move_base;
class AActor;
#ifdef MMC_BOWLING_prop_move_base_generated_h
#error "prop_move_base.generated.h already included, missing '#pragma once' in prop_move_base.h"
#endif
#define MMC_BOWLING_prop_move_base_generated_h

#define MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindMoveBaseByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_targetName); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(Aprop_move_base**)Z_Param__Result=Aprop_move_base::FindMoveBaseByName(Z_Param_targetName,Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMoving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsMoving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClosing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsClosing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOpening) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsOpening(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClosed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsClosed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsOpen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEstimatedTravelTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetEstimatedTravelTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_lerp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPosition(Z_Param_lerp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Pause(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUse) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_caller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Use(Z_Param_caller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Toggle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Close(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Open(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSpeed(Z_Param_newSpeed); \
		P_NATIVE_END; \
	}


#define MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindMoveBaseByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_targetName); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(Aprop_move_base**)Z_Param__Result=Aprop_move_base::FindMoveBaseByName(Z_Param_targetName,Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMoving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsMoving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClosing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsClosing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOpening) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsOpening(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClosed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsClosed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsOpen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEstimatedTravelTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetEstimatedTravelTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_lerp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPosition(Z_Param_lerp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Pause(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUse) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_caller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Use(Z_Param_caller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Toggle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Close(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Open(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSpeed(Z_Param_newSpeed); \
		P_NATIVE_END; \
	}


#define MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_EVENT_PARMS \
	struct prop_move_base_eventOnChangePosition_Parms \
	{ \
		float deltaLerp; \
	};


#define MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_CALLBACK_WRAPPERS
#define MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAprop_move_base(); \
	friend MMC_BOWLING_API class UClass* Z_Construct_UClass_Aprop_move_base(); \
public: \
	DECLARE_CLASS(Aprop_move_base, Aentity_base, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMC_Bowling"), NO_API) \
	DECLARE_SERIALIZER(Aprop_move_base) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAprop_move_base(); \
	friend MMC_BOWLING_API class UClass* Z_Construct_UClass_Aprop_move_base(); \
public: \
	DECLARE_CLASS(Aprop_move_base, Aentity_base, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMC_Bowling"), NO_API) \
	DECLARE_SERIALIZER(Aprop_move_base) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Aprop_move_base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Aprop_move_base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aprop_move_base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aprop_move_base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aprop_move_base(Aprop_move_base&&); \
	NO_API Aprop_move_base(const Aprop_move_base&); \
public:


#define MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aprop_move_base(Aprop_move_base&&); \
	NO_API Aprop_move_base(const Aprop_move_base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aprop_move_base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aprop_move_base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aprop_move_base)


#define MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_PRIVATE_PROPERTY_OFFSET
#define MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_20_PROLOG \
	MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_EVENT_PARMS


#define MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_PRIVATE_PROPERTY_OFFSET \
	MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_RPC_WRAPPERS \
	MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_CALLBACK_WRAPPERS \
	MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_INCLASS \
	MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_PRIVATE_PROPERTY_OFFSET \
	MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_CALLBACK_WRAPPERS \
	MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_INCLASS_NO_PURE_DECLS \
	MMC_Bowling_Source_MMC_Bowling_prop_move_base_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMC_Bowling_Source_MMC_Bowling_prop_move_base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
