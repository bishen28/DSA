##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Stack
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/Aadarsh/Desktop/Acadmic/ABS/DATA_STRECTURE
ProjectPath            :=C:/Users/Aadarsh/Desktop/Acadmic/ABS/DATA_STRECTURE/Stack
IntermediateDirectory  :=../build-$(ConfigurationName)/Stack
OutDir                 :=../build-$(ConfigurationName)/Stack
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Aadarsh
Date                   :=08/03/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :="C:/Program Files/mingw-w64/mingw64/bin/g++.exe"
SharedObjectLinkerName :="C:/Program Files/mingw-w64/mingw64/bin/g++.exe" -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files/mingw-w64/mingw64/bin/windres.exe"
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "C:/Program Files/mingw-w64/mingw64/bin/ar.exe" rcu
CXX      := "C:/Program Files/mingw-w64/mingw64/bin/g++.exe"
CC       := "C:/Program Files/mingw-w64/mingw64/bin/gcc.exe"
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files/mingw-w64/mingw64/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/Stack/StackA.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Stack/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Stack/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Stack" mkdir "..\build-$(ConfigurationName)\Stack"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Stack" mkdir "..\build-$(ConfigurationName)\Stack"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Stack/.d:
	@if not exist "..\build-$(ConfigurationName)\Stack" mkdir "..\build-$(ConfigurationName)\Stack"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Stack/StackA.cpp$(ObjectSuffix): StackA.cpp ../build-$(ConfigurationName)/Stack/StackA.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Aadarsh/Desktop/Acadmic/ABS/DATA_STRECTURE/Stack/StackA.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/StackA.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Stack/StackA.cpp$(DependSuffix): StackA.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Stack/StackA.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Stack/StackA.cpp$(DependSuffix) -MM StackA.cpp

../build-$(ConfigurationName)/Stack/StackA.cpp$(PreprocessSuffix): StackA.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Stack/StackA.cpp$(PreprocessSuffix) StackA.cpp

../build-$(ConfigurationName)/Stack/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Stack/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Aadarsh/Desktop/Acadmic/ABS/DATA_STRECTURE/Stack/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Stack/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Stack/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Stack/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Stack/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Stack/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/Stack//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


