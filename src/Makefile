main:
	nasm -fmacho64 cocos.asm
	nasm -fmacho64 cocos_add.asm
	ar -rc libCacao.a cocos.o #wtf is ar
	ar -rc libCacao.a cocos_add.o
	rm cocos.o
	rm cocos_add.o
inject:
	cp libCacao.a Cacao/static/libCacao.a
