#customizable-kind of
CXX=g++-5
OUTPUT=dist/main.dylib

# no touch

LDFLAGS=-static-libstdc++
INCL=Cacao/include Cacao/include/cocos2dx Cacao/include/cocos2dx/include Cacao/include/cocos2dx/kazmath/include Cacao/include/cocos2dx/platform/mac Cacao/include/cocos2dx/platform/third_party/mac Cacao/include/cocos2dx/platform/third_party/mac/OGLES Cacao/include/cocos2dext Cacao/include/cocos2dx/custom/Sprites/CCMenuItemSpriteExtra
CXX_INCL=$(INCL:%=-I%)
CXX_FLAGS=-std=c++11 -DCC_TARGET_OS_MAC -lGDML -lCacao -LCacao/static -dynamiclib -o $(OUTPUT) -lSystem -lstdc++ -static -g Cacao/include/Cacao.cpp
OSXINJ := $(shell command -v osxinj 2> /dev/null)

main: dist
	@echo "Building project..."
	@$(CXX) $(CXX_INCL) $(CXX_FLAGS) $(CXX_EXTRA) main.cpp
	@echo "Finished"
dist:
	mkdir dist
clean: 
	-@rm -rf dist 2>/dev/null || true
inject:
	ifndef OSXINJ
	    $(error "Can't automatically inject without osxinj installed")
	endif
	sudo osxinj "Geometry Dash" $(OUTPUT)