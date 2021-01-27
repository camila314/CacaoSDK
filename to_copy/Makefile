#customizable-kind of
CXX=g++-5
OUTPUT=main.dylib

# no touch

LDFLAGS=-static-libstdc++
INCL=Cacao/include Cacao/include/cocos2dx Cacao/include/cocos2dx/include Cacao/include/cocos2dx/kazmath/include Cacao/include/cocos2dx/platform/mac Cacao/include/cocos2dx/platform/third_party/mac Cacao/include/cocos2dx/platform/third_party/mac/OGLES Cacao/include/cocos2dext Cacao/include/cocos2dx/custom/Sprites/CCMenuItemSpriteExtra
CXX_INCL=$(INCL:%=-I%)
#-I/usr/local/Cellar/gcc@5/5.5.0_6/include/c++/5.5.0 -I/usr/local/Cellar/gcc@5/5.5.0_6/include/c++/5.5.0/x86_64-apple-darwin17.7.0
CXX_FLAGS=-std=c++11 -DCC_TARGET_OS_MAC -lGDML -lCacao -LCacao/static -dynamiclib -o dist/$(OUTPUT) -lSystem -lstdc++ -static -g


main: dist
	@echo "Building project..."
	@$(CXX) $(CXX_INCL) $(CXX_FLAGS) main.cpp
	@echo "Finished"
dist:
	mkdir dist
clean: 
	-@rm -rf dist 2>/dev/null || true