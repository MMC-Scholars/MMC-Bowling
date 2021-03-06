// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MMC_BOWLING_prop_movelinear_generated_h
#error "prop_movelinear.generated.h already included, missing '#pragma once' in prop_movelinear.h"
#endif
#define MMC_BOWLING_prop_movelinear_generated_h

#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEstimatedTravelTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetEstimatedTravelTime(); \
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
	DECLARE_FUNCTION(execSetQuarterPeriod) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newPeriod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetQuarterPeriod(Z_Param_newPeriod); \
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
	DECLARE_FUNCTION(execUse) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_caller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Use(Z_Param_caller); \
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


#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEstimatedTravelTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetEstimatedTravelTime(); \
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
	DECLARE_FUNCTION(execSetQuarterPeriod) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newPeriod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetQuarterPeriod(Z_Param_newPeriod); \
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
	DECLARE_FUNCTION(execUse) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_caller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Use(Z_Param_caller); \
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


#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAprop_movelinear(); \
	friend MMC_BOWLING_API class UClass* Z_Construct_UClass_Aprop_movelinear(); \
public: \
	DECLARE_CLASS(Aprop_movelinear, Aprop_move_base, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMC_Bowling"), NO_API) \
	DECLARE_SERIALIZER(Aprop_movelinear) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAprop_movelinear(); \
	friend MMC_BOWLING_API class UClass* Z_Construct_UClass_Aprop_movelinear(); \
public: \
	DECLARE_CLASS(Aprop_movelinear, Aprop_move_base, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMC_Bowling"), NO_API) \
	DECLARE_SERIALIZER(Aprop_movelinear) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Aprop_movelinear(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Aprop_movelinear) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aprop_movelinear); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aprop_movelinear); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aprop_movelinear(Aprop_movelinear&&); \
	NO_API Aprop_movelinear(const Aprop_movelinear&); \
public:


#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aprop_movelinear(Aprop_movelinear&&); \
	NO_API Aprop_movelinear(const Aprop_movelinear&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aprop_movelinear); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aprop_movelinear); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aprop_movelinear)


#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_24_PRIVATE_PROPERTY_OFFSET
#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_21_PROLOG
#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_24_PRIVATE_PROPERTY_OFFSET \
	MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_24_RPC_WRAPPERS \
	MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_24_INCLASS \
	MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_24_PRIVATE_PROPERTY_OFFSET \
	MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_24_INCLASS_NO_PURE_DECLS \
	MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
