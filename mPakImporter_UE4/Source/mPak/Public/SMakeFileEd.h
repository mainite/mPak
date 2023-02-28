// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

/**
 * 
 * 早期的initStudio，迁移到这里
 * 
 */



 //预打包资产的路径 , 项目root , 项目名 , 项目_uproject
FString UEAccessPath = "";
FString ProjectRoot = "";
FString ProjectName = "";
FString Project_uproject = "";



class MPAK_API SMakeFileEd : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SMakeFileEd)
	{}
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);




private:


	TSharedPtr<SButton> PackButton;
	TSharedPtr<SEditableTextBox> MakeEditableTextBox;
	TSharedPtr<SEditableTextBox> SaveEditableTextBox;
	TSharedPtr<SCheckBox> WindowsEditorCheckBox;
	TSharedPtr<SCheckBox> WindowsCheckBox;
	TSharedPtr<SCheckBox> HololensCheckBox;
	TSharedPtr<SCheckBox> AndroidCheckBox;
	TSharedPtr<SCheckBox> LinuxCheckBox;
	TSharedPtr<SCheckBox> IOSCheckBox;


	void MakePath();

	FString GetMakePath();


	FReply OnClickFun();



};
