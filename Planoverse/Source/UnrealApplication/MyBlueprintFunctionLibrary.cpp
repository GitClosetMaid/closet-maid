// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

#include "Paths.h"
#include "PlatformFile.h"
#include "PlatformFilemanager.h"

TArray<FString> UMyBlueprintFunctionLibrary::GetAllSaveGameSlotNames()
{
    //////////////////////////////////////////////////////////////////////////////
    class FFindSavesVisitor : public IPlatformFile::FDirectoryVisitor
    {
    public:
        FFindSavesVisitor() {}

        virtual bool Visit(const TCHAR* FilenameOrDirectory, bool bIsDirectory)
        {
            if (!bIsDirectory)
            {
                FString FullFilePath(FilenameOrDirectory);
                if (FPaths::GetExtension(FullFilePath) == TEXT("sav"))
                {
                    FString CleanFilename = FPaths::GetBaseFilename(FullFilePath);
                    CleanFilename = CleanFilename.Replace(TEXT(".sav"), TEXT(""));
                    SavesFound.Add(CleanFilename);
                }
            }
            return true;
        }
        TArray<FString> SavesFound;
    };
    //////////////////////////////////////////////////////////////////////////////

    TArray<FString> Saves;
    const FString SavesFolder = FPaths::GameSavedDir() + TEXT("SaveGames");

    if (!SavesFolder.IsEmpty())
    {
        FFindSavesVisitor Visitor;
        FPlatformFileManager::Get().GetPlatformFile().IterateDirectory(*SavesFolder, Visitor);
        Saves = Visitor.SavesFound;
    }

    return Saves;
}
