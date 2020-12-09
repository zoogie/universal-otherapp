#pragma once

#include "lib/defines.h"
#include "../kernelhaxcode_3ds/takeover.h"

/**
 * @brief Run memchunkhaxv1, exploiting the kernel, and map KHC.
 * @param layout KHC data (in LINEAR memory).
 * @param workBuffer Temporary storage in LINEAR memory for this function to use.
 * @param gspHandle gsp:Gpu handle with rights acquired.
 */
Result memchunkhax(const BlobLayout *layout, void *workBuffer, Handle gspHandle);
