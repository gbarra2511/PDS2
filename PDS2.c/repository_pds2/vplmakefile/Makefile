CC=g++
CFLAGS=-std=c++11
BUILD_DIR=build
SRC_DIR=src
ENTIDADES_DIR=src/entidades
TARGET=vpl_execution
INCLUDE_DIR=include

all: ${TARGET}

${BUILD_DIR}:
	mkdir -p ${BUILD_DIR}

build/Circulo.o: ${INCLUDE_DIR}/Circulo.hpp ${ENTIDADES_DIR}/Circulo.cpp ${BUILD_DIR}
	${CC} ${CFLAGS} -c ${ENTIDADES_DIR}/Circulo.cpp -I${INCLUDE_DIR} -o ${BUILD_DIR}/Circulo.o

build/Ponto.o: ${INCLUDE_DIR}/Ponto.hpp ${ENTIDADES_DIR}/Ponto.cpp ${BUILD_DIR}
	${CC} ${CFLAGS} -c ${ENTIDADES_DIR}/Ponto.cpp -I${INCLUDE_DIR} -o ${BUILD_DIR}/Ponto.o

build/main.o: ${SRC_DIR}/main.cpp ${BUILD_DIR}
	${CC} ${CFLAGS} -c ${SRC_DIR}/main.cpp -I${INCLUDE_DIR} -o ${BUILD_DIR}/main.o


${TARGET}: ${BUILD_DIR}/main.o ${BUILD_DIR}/Ponto.o ${BUILD_DIR}/Circulo.o
	${CC} ${BUILD_DIR}/main.o ${BUILD_DIR}/Ponto.o ${BUILD_DIR}/Circulo.o -o ${TARGET}
