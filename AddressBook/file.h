#ifndef FILE_H
#define FILE_H

#include "contact.h"   // For struct AddressBook definition

// --- File-related Functions ---
void saveContactsToFile(struct AddressBook *addressBook);
void loadContactsFromFile(struct AddressBook *addressBook);

#endif
