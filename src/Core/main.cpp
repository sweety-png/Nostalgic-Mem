#include <iostream>
#include "../Utils/DebugPriv.h"
// #include "../Process/ProcScanner.h"
#include "../CLI/DebugCLI.h"

int main()
{
	/* Don't delete this, we will probably need it, remember to execute with admin priviledges */
	NostalgicMem::EnableDebugPriv();

	/* All the input stuff goes here */
	/* Lil reminder for the input cli, PLEASE remember to clean up all ProcScanner instances created */

	NostalgicMem::DebugCLI* debug_cli = new NostalgicMem::DebugCLI();

	debug_cli->Menu();

	delete debug_cli;

	return 0;
}