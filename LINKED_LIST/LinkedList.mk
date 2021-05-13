##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=LinkedList
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/Aadarsh/Desktop/Acadmic/ABS/DATA_STRECTURE
ProjectPath            :=C:/Users/Aadarsh/Desktop/Acadmic/ABS/DATA_STRECTURE/LINKED_LIST
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Aadarsh
Date                   :=17/03/2021
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
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="LinkedList.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files/mingw-w64/mingw64/bin/windres.exe"
LinkOptions            :=  -static
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
CXXFLAGS :=  -g -O0 -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files/mingw-w64/mingw64/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/DoublyCircularLinkedList.cpp$(ObjectSuffix) $(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix) $(IntermediateDirectory)/CircularLinkedList.cpp$(ObjectSuffix) $(IntermediateDirectory)/DoublyLinkedList.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Aadarsh/Desktop/Acadmic/ABS/DATA_STRECTURE/LINKED_LIST/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/DoublyCircularLinkedList.cpp$(ObjectSuffix): DoublyCircularLinkedList.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/DoublyCircularLinkedList.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/DoublyCircularLinkedList.cpp$(DependSuffix) -MM DoublyCircularLinkedList.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Aadarsh/Desktop/Acadmic/ABS/DATA_STRECTURE/LINKED_LIST/DoublyCircularLinkedList.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DoublyCircularLinkedList.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DoublyCircularLinkedList.cpp$(PreprocessSuffix): DoublyCircularLinkedList.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/DoublyCircularLinkedList.cpp$(PreprocessSuffix) DoublyCircularLinkedList.cpp

$(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix): LinkedList.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LinkedList.cpp$(DependSuffix) -MM LinkedList.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Aadarsh/Desktop/Acadmic/ABS/DATA_STRECTURE/LINKED_LIST/LinkedList.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LinkedList.cpp$(PreprocessSuffix): LinkedList.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LinkedList.cpp$(PreprocessSuffix) LinkedList.cpp

$(IntermediateDirectory)/CircularLinkedList.cpp$(ObjectSuffix): CircularLinkedList.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/CircularLinkedList.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/CircularLinkedList.cpp$(DependSuffix) -MM CircularLinkedList.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Aadarsh/Desktop/Acadmic/ABS/DATA_STRECTURE/LINKED_LIST/CircularLinkedList.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CircularLinkedList.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/CircularLinkedList.cpp$(PreprocessSuffix): CircularLinkedList.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/CircularLinkedList.cpp$(PreprocessSuffix) CircularLinkedList.cpp

$(IntermediateDirectory)/DoublyLinkedList.cpp$(ObjectSuffix): DoublyLinkedList.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/DoublyLinkedList.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/DoublyLinkedList.cpp$(DependSuffix) -MM DoublyLinkedList.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Aadarsh/Desktop/Acadmic/ABS/DATA_STRECTURE/LINKED_LIST/DoublyLinkedList.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DoublyLinkedList.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DoublyLinkedList.cpp$(PreprocessSuffix): DoublyLinkedList.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/DoublyLinkedList.cpp$(PreprocessSuffix) DoublyLinkedList.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


