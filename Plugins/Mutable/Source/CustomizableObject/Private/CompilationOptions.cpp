#include "CompilationOptions.h"

FCompilationOptions::FCompilationOptions() {
    this->bTextureCompression = false;
    this->OptimizationLevel = 0;
    this->bUseParallelCompilation = false;
    this->bUseDiskCompilation = false;
}

