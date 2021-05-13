##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Tree
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/Aadarsh/Desktop/Acadmic/ABS/DATA_STRECTURE
ProjectPath            :=C:/Users/Aadarsh/Desktop/Acadmic/ABS/DATA_STRECTURE/Tree
IntermediateDirectory  :=../build-$(ConfigurationName)/Tree
OutDir                 :=../build-$(ConfigurationName)/Tree
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Aadarsh
Date                   :=08/05/2021
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
Objects0=../build-$(ConfigurationName)/Tree/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Tree/Tree.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Tree/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Tree" mkdir "..\build-$(ConfigurationName)\Tree"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Tree" mkdir "..\build-$(ConfigurationName)\Tree"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Tree/.d:
	@if not exist "..\build-$(ConfigurationName)\Tree" mkdir "..\build-$(ConfigurationName)\Tree"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Tree/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Tree/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Aadarsh/Desktop/Acadmic/ABS/DATA_STRECTURE/Tree/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Tree/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Tree/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Tree/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Tree/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Tree/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/Tree/Tree.cpp$(ObjectSuffix): Tree.cpp ../build-$(ConfigurationName)/Tree/Tree.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Aadarsh/Desktop/Acadmic/ABS/DATA_STRECTURE/Tree/Tree.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Tree.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Tree/Tree.cpp$(DependSuffix): Tree.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Tree/Tree.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Tree/Tree.cpp$(DependSuffix) -MM Tree.cpp

../build-$(ConfigurationName)/Tree/Tree.cpp$(PreprocessSuffix): Tree.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Tree/Tree.cpp$(PreprocessSuffix) Tree.cpp


-include ../build-$(ConfigurationName)/Tree//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


