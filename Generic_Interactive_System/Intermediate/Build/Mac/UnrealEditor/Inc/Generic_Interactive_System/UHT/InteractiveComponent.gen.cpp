// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Generic_Interactive_System/Public/Components/InteractiveComponent.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GENERIC_INTERACTIVE_SYSTEM_API UClass* Z_Construct_UClass_UInteractiveComponent();
	GENERIC_INTERACTIVE_SYSTEM_API UClass* Z_Construct_UClass_UInteractiveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Generic_Interactive_System();
// End Cross Module References
	DEFINE_FUNCTION(UInteractiveComponent::execServerInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_Interactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerInteract_Validate(Z_Param_Interactor))
		{
			RPC_ValidateFailed(TEXT("ServerInteract_Validate"));
			return;
		}
		P_THIS->ServerInteract_Implementation(Z_Param_Interactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractiveComponent::execTrackForInteractor)
	{
		P_GET_OBJECT(AActor,Z_Param_Interactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TrackForInteractor(Z_Param_Interactor);
		P_NATIVE_END;
	}
	struct InteractiveComponent_eventServerInteract_Parms
	{
		AActor* Interactor;
	};
	static FName NAME_UInteractiveComponent_ServerInteract = FName(TEXT("ServerInteract"));
	void UInteractiveComponent::ServerInteract(AActor* Interactor)
	{
		InteractiveComponent_eventServerInteract_Parms Parms;
		Parms.Interactor=Interactor;
		ProcessEvent(FindFunctionChecked(NAME_UInteractiveComponent_ServerInteract),&Parms);
	}
	void UInteractiveComponent::StaticRegisterNativesUInteractiveComponent()
	{
		UClass* Class = UInteractiveComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerInteract", &UInteractiveComponent::execServerInteract },
			{ "TrackForInteractor", &UInteractiveComponent::execTrackForInteractor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractiveComponent_ServerInteract_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveComponent_ServerInteract_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractiveComponent_eventServerInteract_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveComponent_ServerInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveComponent_ServerInteract_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveComponent_ServerInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/InteractiveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveComponent_ServerInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveComponent, nullptr, "ServerInteract", nullptr, nullptr, sizeof(InteractiveComponent_eventServerInteract_Parms), Z_Construct_UFunction_UInteractiveComponent_ServerInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponent_ServerInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractiveComponent_ServerInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponent_ServerInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractiveComponent_ServerInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveComponent_ServerInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractiveComponent_TrackForInteractor_Statics
	{
		struct InteractiveComponent_eventTrackForInteractor_Parms
		{
			AActor* Interactor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractiveComponent_TrackForInteractor_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractiveComponent_eventTrackForInteractor_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractiveComponent_TrackForInteractor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractiveComponent_TrackForInteractor_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveComponent_TrackForInteractor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/InteractiveComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveComponent_TrackForInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveComponent, nullptr, "TrackForInteractor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInteractiveComponent_TrackForInteractor_Statics::InteractiveComponent_eventTrackForInteractor_Parms), Z_Construct_UFunction_UInteractiveComponent_TrackForInteractor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponent_TrackForInteractor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractiveComponent_TrackForInteractor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveComponent_TrackForInteractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractiveComponent_TrackForInteractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveComponent_TrackForInteractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveComponent);
	UClass* Z_Construct_UClass_UInteractiveComponent_NoRegister()
	{
		return UInteractiveComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Generic_Interactive_System,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractiveComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractiveComponent_ServerInteract, "ServerInteract" }, // 2011896279
		{ &Z_Construct_UFunction_UInteractiveComponent_TrackForInteractor, "TrackForInteractor" }, // 2447905277
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/InteractiveComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/InteractiveComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveComponent_Statics::ClassParams = {
		&UInteractiveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveComponent()
	{
		if (!Z_Registration_Info_UClass_UInteractiveComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveComponent.OuterSingleton, Z_Construct_UClass_UInteractiveComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveComponent.OuterSingleton;
	}
	template<> GENERIC_INTERACTIVE_SYSTEM_API UClass* StaticClass<UInteractiveComponent>()
	{
		return UInteractiveComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveComponent);
	UInteractiveComponent::~UInteractiveComponent() {}
	struct Z_CompiledInDeferFile_FID_arthurdurand_Perforce_Depot_Reseau_TP1_20233_8DJV104_PROGRESEAU_ARTHUR_DAVID_UEPROJ_Plugins_Generic_Interactive_System_Source_Generic_Interactive_System_Public_Components_InteractiveComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_arthurdurand_Perforce_Depot_Reseau_TP1_20233_8DJV104_PROGRESEAU_ARTHUR_DAVID_UEPROJ_Plugins_Generic_Interactive_System_Source_Generic_Interactive_System_Public_Components_InteractiveComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveComponent, UInteractiveComponent::StaticClass, TEXT("UInteractiveComponent"), &Z_Registration_Info_UClass_UInteractiveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveComponent), 1755913303U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_arthurdurand_Perforce_Depot_Reseau_TP1_20233_8DJV104_PROGRESEAU_ARTHUR_DAVID_UEPROJ_Plugins_Generic_Interactive_System_Source_Generic_Interactive_System_Public_Components_InteractiveComponent_h_1061268875(TEXT("/Script/Generic_Interactive_System"),
		Z_CompiledInDeferFile_FID_arthurdurand_Perforce_Depot_Reseau_TP1_20233_8DJV104_PROGRESEAU_ARTHUR_DAVID_UEPROJ_Plugins_Generic_Interactive_System_Source_Generic_Interactive_System_Public_Components_InteractiveComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_arthurdurand_Perforce_Depot_Reseau_TP1_20233_8DJV104_PROGRESEAU_ARTHUR_DAVID_UEPROJ_Plugins_Generic_Interactive_System_Source_Generic_Interactive_System_Public_Components_InteractiveComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
