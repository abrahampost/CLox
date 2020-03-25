#include "common.h"
#include "chunk.h"
#include "debug.h"

int main(int argc, const char* argv[]) {
    Chunk chunk;
    initChunk(&chunk);
    int constant1 = addConstant(&chunk, 1.2);
    int constant2 = addConstant(&chunk, 54);
    int constant3 = addConstant(&chunk, 71);
    writeChunk(&chunk, OP_CONSTANT, 123);
    writeChunk(&chunk, constant1, 123);
    writeChunk(&chunk, OP_CONSTANT, 45);
    writeChunk(&chunk, constant2, 45);
    writeChunk(&chunk, OP_CONSTANT, 123);
    writeChunk(&chunk, constant3, 123);
    writeChunk(&chunk, OP_RETURN, 123);
    disassembleChunk(&chunk, "test chunk");
    freeChunk(&chunk);
    return 0;
}