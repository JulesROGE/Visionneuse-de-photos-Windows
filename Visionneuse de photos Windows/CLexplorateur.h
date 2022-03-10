//CLexplorateur.h
#pragma once

using namespace System::IO;
using namespace System;

namespace NS_composants
{
	ref class CLfichier
	{
	public:
		void effacer(String^);
		void copier(String^, String^);
		array<String^>^ explorerUnDossier(String^); //manquait un ^ après <string^>^
	};
}


