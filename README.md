# Nistify-AD-Testing
Tests and development environment for the NISTifyAD project. 

The main project produces a DLL file that can be loaded onto domain controllers and workstations which implements the latest NIST guidance for known secret authentication.

This must be run in an elevated manner so that it may access the computer wide registry keys. 

Example Output:
[-] Can we access the HIBP API?
[*] Yes!
[-] Can we read the configuration from the registry?
Computer\HKEY_LOCAL_MACHINE\SOFTWARE\NISTifyAD
[*] Yes!
[*] Values:
[*] Server: api.pwnedpasswords.com
[*] Resource: /range/
[-] Can we access the API specified in the registry?
[*] Yes!
[-] Testing the sha1 hashing function.
[*] The proposed password: password
[*] The resultant hash: 5baa61e4c9b93f3f0682250b6cf8331b7ee68fd8
[-] Testing full initialization and password check using 'password'
[*] Password was rejected as expected
[*] Any 'No' entries denoted with the exclamation point '!' may be issues that require investigation.
