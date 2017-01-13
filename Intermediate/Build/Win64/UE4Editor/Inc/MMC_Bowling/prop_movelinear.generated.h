// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MMC_BOWLING_prop_movelinear_generated_h
#error "prop_movelinear.generated.h already included, missing '#pragma once' in prop_movelinear.h"
#endif
#define MMC_BOWLING_prop_movelinear_generated_h

#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_14_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execGetMovementTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMovementTime(); \
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
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Use(); \
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


#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execGetMovementTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMovementTime(); \
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
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Use(); \
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


#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_14_EVENT_PARMS \
	struct prop_movelinear_eventOnChangePosition_Parms \
	{ \
		float deltaLerp; \
	};


extern MMC_BOWLING_API  FName MMC_BOWLING_OnChangePosition;
extern MMC_BOWLING_API  FName MMC_BOWLING_OnClosed;
extern MMC_BOWLING_API  FName MMC_BOWLING_OnFullyClosed;
extern MMC_BOWLING_API  FName MMC_BOWLING_OnFullyOpened;
extern MMC_BOWLING_API  FName MMC_BOWLING_OnOpened;
extern MMC_BOWLING_API  FName MMC_BOWLING_OnUseLocked;
#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_14_CALLBACK_WRAPPERS
#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAprop_movelinear(); \
	friend MMC_BOWLING_API class UClass* Z_Construct_UClass_Aprop_movelinear(); \
	public: \
	DECLARE_CLASS(Aprop_movelinear, Aentity_base, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMC_Bowling"), NO_API) \
	DECLARE_SERIALIZER(Aprop_movelinear) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesAprop_movelinear(); \
	friend MMC_BOWLING_API class UClass* Z_Construct_UClass_Aprop_movelinear(); \
	public: \
	DECLARE_CLASS(Aprop_movelinear, Aentity_base, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MMC_Bowling"), NO_API) \
	DECLARE_SERIALIZER(Aprop_movelinear) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_14_STANDARD_CONSTRUCTORS \
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


#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aprop_movelinear(Aprop_movelinear&&); \
	NO_API Aprop_movelinear(const Aprop_movelinear&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aprop_movelinear); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aprop_movelinear); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aprop_movelinear)


#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_11_PROLOG \
	MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_14_EVENT_PARMS


#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_14_RPC_WRAPPERS \
	MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_14_CALLBACK_WRAPPERS \
	MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_14_INCLASS \
	MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_14_CALLBACK_WRAPPERS \
	MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_14_INCLASS_NO_PURE_DECLS \
	MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMC_Bowling_Source_MMC_Bowling_prop_movelinear_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
