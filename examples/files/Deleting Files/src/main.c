/*
 *--------------------------------------
 * Program Name: Demo
 * Author: Alvajoy 'Alvajoy123' Asante
 * Description: Hydra Demo
 *--------------------------------------
 */

#include <tice.h>
#include <graphx.h>

#include "hydra/hydra.h"

int main(void)
{
    /* Clear the homescreen */
    os_ClrHome();

    /*
     * Always begin usage of file system with this code,
     * What this code does apply all the files in TI-OS into Hydra
     * filesystem.
     */
    hydra_Begin();

    // Put all you code for messing with the file system in here

    /* This piece of code searches for the file name with DEMO and returns it's pointer to given position  */
    struct hydra_files_t * DEMO_FILE = hydra_SearchFile("DEMO", HYDRA_HOME_FOLDER);
    
    /* We want to check if the file named demo is in the hydra file system ... if the variable is NULL stop */
    if (DEMO_FILE != NULL)
    {
        /* The file was found! */

    }else{
        /* The file was not found! */

    }

    /*
     * Always end usage of file system with this code
     * This piece of code basically saves the files
     * and user System and free the data from heap.
     */
    hydra_End();

    return 0;
}
