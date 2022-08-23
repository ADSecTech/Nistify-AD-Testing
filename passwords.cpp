#include "custom_headers.h"

// Returns true if the proposed password meets the minimum length (8 chars) and is not
// in api_results
bool checkPassword(string proposed_password, string password_hash, string* api_results)
{
	// Check length. This is the only other requirement from the NIST documents. 
	// This should be handled by system policy but just in case. 
	if (proposed_password.length() < 8)
		return false;

	// Check that the password is not in the list 
	// All we have to do is search the list of returned hashes for the password_hash[5:end]
	size_t ret = api_results->find(password_hash.substr(5, password_hash.length()));
	if (ret != std::string::npos)
		return false;
	else
		return true;
}