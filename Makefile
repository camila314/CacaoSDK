#customizable-kind of
CXX=g++
OUTPUT=dist/main.dylib
SDK_LOCATION=/Users/student/Desktop/Storage/SDK/MacOSX10.7.sdk/
# no touch

INCL=Cacao/include Cacao/include/cocos2dx Cacao/include/cocos2dx/include Cacao/include/cocos2dx/kazmath/include Cacao/include/cocos2dx/platform/mac Cacao/include/cocos2dx/platform/third_party/mac Cacao/include/cocos2dx/platform/third_party/mac/OGLES Cacao/include/cocos2dext Cacao/include/cocos2dx/custom/Sprites/CCMenuItemSpriteExtra
CXX_INCL=$(INCL:%=-I%)
CXX_FLAGS= -mmacosx-version-min=10.7 -isysroot $(SDK_LOCATION) -std=c++17 -DCC_TARGET_OS_MAC -lGDML -lCacao -LCacao/static -dynamiclib -lSystem -lstdc++ -g Cacao/include/Cacao.cpp -Wno-deprecated

main: dist
	@echo "Building project..."
	@$(CXX) $(CXX_INCL) $(CXX_FLAGS) $(CXX_EXTRA) main.cpp -o $(OUTPUT)
	@echo "Finished"
dist:
	mkdir dist
clean: 
	-@rm -rf dist 2>/dev/null || true
inject: # If you have osxinj installed use this.
	sudo osxinj "Geometry Dash" $(OUTPUT)
