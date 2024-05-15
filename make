#!/bin/bash

compile() {
	echo "==================== COMPILING ============================="
	mkdir -p build
	cd build && cmake .. && make && cd ../
	
}

run() {
	echo "===================== RUNNING =============================="
	./build/MyProgram
}


case "$1" in
	compile)
		compile
		;;
	run)
		compile
		run
		;;
	clean)
		rm -rf build/*.o
		;;
	purge)
		rm -rf build
		;;
	*)
		echo "Usage: $0 {compile|run|clean|purge}"
		exit 1
		;;
esac