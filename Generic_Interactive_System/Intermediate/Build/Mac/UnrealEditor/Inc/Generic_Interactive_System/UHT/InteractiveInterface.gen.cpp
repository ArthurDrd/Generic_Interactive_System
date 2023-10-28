// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Generic_Interactive_System/Public/Interfaces/InteractiveInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GENERIC_INTERACTIVE_SYSTEM_API UClass* Z_Construct_UClass_UInteractiveInterface();
	GENERIC_INTERACTIVE_SYSTEM_API UClass* Z_Construct_UClass_UInteractiveInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Generic_Interactive_System();
// End Cross Module References
	void IInteractiveInterface::BP_OnInteract()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BP_OnInteract instead.");
	}
	void UInteractiveInterface::StaticRegisterNativesUInteractiveInterface()
	{
	}
	struct Z_Construct_UFunction_UInteractiveInterface_BP_OnInteract_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractiveInterface_BP_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interfaces/InteractiveInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractiveInterface_BP_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractiveInterface, nullptr, "BP_OnInteract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractiveInterface_BP_OnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractiveInterface_BP_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractiveInterface_BP_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractiveInterface_BP_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveInterface);
	UClass* Z_Construct_UClass_UInteractiveInterface_NoRegister()
	{
		return UInteractiveInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Generic_Interactive_System,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractiveInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractiveInterface_BP_OnInteract, "BP_OnInteract" }, // 3253180306
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/InteractiveInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractiveInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveInterface_Statics::ClassParams = {
		&UInteractiveInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveInterface()
	{
		if (!Z_Registration_Info_UClass_UInteractiveInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveInterface.OuterSingleton, Z_Construct_UClass_UInteractiveInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveInterface.OuterSingleton;
	}
	template<> GENERIC_INTERACTIVE_SYSTEM_API UClass* StaticClass<UInteractiveInterface>()
	{
		return UInteractiveInterface::StaticClass();
	}
	UInteractiveInterface::UInteractiveInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveInterface);
	UInteractiveInterface::~UInteractiveInterface() {}
	static FName NAME_UInteractiveInterface_BP_OnInteract = FName(TEXT("BP_OnInteract"));
	void IInteractiveInterface::Execute_BP_OnInteract(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractiveInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractiveInterface_BP_OnInteract);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	struct Z_CompiledInDeferFile_FID_arthurdurand_Perforce_Depot_Reseau_TP1_20233_8DJV104_PROGRESEAU_ARTHUR_DAVID_UEPROJ_Plugins_Generic_Interactive_System_Source_Generic_Interactive_System_Public_Interfaces_InteractiveInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_arthurdurand_Perforce_Depot_Reseau_TP1_20233_8DJV104_PROGRESEAU_ARTHUR_DAVID_UEPROJ_Plugins_Generic_Interactive_System_Source_Generic_Interactive_System_Public_Interfaces_InteractiveInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveInterface, UInteractiveInterface::StaticClass, TEXT("UInteractiveInterface"), &Z_Registration_Info_UClass_UInteractiveInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveInterface), 2699948456U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_arthurdurand_Perforce_Depot_Reseau_TP1_20233_8DJV104_PROGRESEAU_ARTHUR_DAVID_UEPROJ_Plugins_Generic_Interactive_System_Source_Generic_Interactive_System_Public_Interfaces_InteractiveInterface_h_2538425270(TEXT("/Script/Generic_Interactive_System"),
		Z_CompiledInDeferFile_FID_arthurdurand_Perforce_Depot_Reseau_TP1_20233_8DJV104_PROGRESEAU_ARTHUR_DAVID_UEPROJ_Plugins_Generic_Interactive_System_Source_Generic_Interactive_System_Public_Interfaces_InteractiveInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_arthurdurand_Perforce_Depot_Reseau_TP1_20233_8DJV104_PROGRESEAU_ARTHUR_DAVID_UEPROJ_Plugins_Generic_Interactive_System_Source_Generic_Interactive_System_Public_Interfaces_InteractiveInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
