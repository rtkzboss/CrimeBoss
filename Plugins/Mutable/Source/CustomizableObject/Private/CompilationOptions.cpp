#include "CompilationOptions.h"

FCompilationOptions::FCompilationOptions() {
    (*this).bTextureCompression = true;
    (*this).OptimizationLevel = 1;
    (*this).bUseParallelCompilation = true;
    (*this).bUseDiskCompilation = false;
}

