/* --------------------------------- ABOUT -------------------------------------
Original Author: Adam Yaxley
Website: https://github.com/adamyaxley
License: See end of file
Obfuscate
Guaranteed compile-time string literal obfuscation library for C++14
Usage:
Pass string literals into the AY_OBFUSCATE macro to obfuscate them at compile
time. AY_OBFUSCATE returns a reference to an ay::obfuscated_data object with the
following traits:
	- Guaranteed obfuscation of string
	The passed string is encrypted with a simple XOR cipher at compile-time to
	prevent it being viewable in the binary image
	- Global lifetime
	The actual instantiation of the ay::obfuscated_data takes place inside a
	lambda as a function level static
	- Implicitly convertable to a char*
	This means that you can pass it directly into functions that would normally
	take a char* or a const char*
Example:
const char* obfuscated_string = AY_OBFUSCATE("Hello World");
std::cout << obfuscated_string << std::endl;
----------------------------------------------------------------------------- */
#include <cstddef>
#include <string>

#ifndef AY_OBFUSCATE_DEFAULT_KEY
// The default 64 bit key to obfuscate strings with.
// This can be user specified by defining AY_OBFUSCATE_DEFAULT_KEY before
// including obfuscate.h
#define AY_OBFUSCATE_DEFAULT_KEY 0xAAC12C92CAE4BCC1 ^ 0x00000a1000a
#endif

namespace ay
{
    using size_type = unsigned long long;
    using key_type = unsigned long long;

    constexpr void cipher(char* data, size_type size, key_type key)
    {
        // Split the key into unaligned chunks
        const char chunks[8] = {
                char(key >> 41),
                char(key >> 31),
                char(key >> 7),
                char(key >> 17),
                char(key >> 47),
                char(key),
                char(key >> 55),
                char(key >> 25)
        };

        // Obfuscate with an XOR cipher based on key
        for (size_type i = 0; i < size; i++)
        {
            data[i] ^= chunks[i % 8];
        }
    }

    // Obfuscates a string at compile time
    template <size_type N, key_type KEY>
    class obfuscator
    {
    public:
        // Obfuscates the string 'data' on construction
        constexpr obfuscator(const char* data)
        {
            // Copy data
            for (size_type i = 0; i < N; i++)
            {
                m_data[i] = data[i];
            }

            // On construction each of the characters in the string is
            // obfuscated with an XOR cipher based on key
            cipher(m_data, N, KEY);
        }

        constexpr const char* data() const
        {
            return &m_data[0];
        }

        constexpr size_type size() const
        {
            return N;
        }

        constexpr key_type key() const
        {
            return KEY;
        }

    private:

        char m_data[N]{};
    };

    // Handles decryption and re-encryption of an encrypted string at runtime
    template <size_type N, key_type KEY>
    class obfuscated_data
    {
    public:
        obfuscated_data(const obfuscator<N, KEY>& obfuscator)
        {
            // Copy obfuscated data
            for (size_type i = 0; i < N; i++)
            {
                m_data[i] = obfuscator.data()[i];
            }
        }

        ~obfuscated_data()
        {
            // Zero m_data to remove it from memory
            for (size_type i = 0; i < N; i++)
            {
                m_data[i] = 0;
            }
        }

        // Returns a pointer to the plain text string, decrypting it if
        // necessary
        operator char*()
        {
            decrypt();
            return m_data;
        }

        operator std::string()
        {
            decrypt();
            return m_data;
        }

        // Manually u_13_313_132$ the string
        void decrypt()
        {
            if (m_encrypted)
            {
                cipher(m_data, N, KEY);
                m_encrypted = false;
            }
        }

        // Manually re-u_13_313_131 the string
        void encrypt()
        {
            if (!m_encrypted)
            {
                cipher(m_data, N, KEY);
                m_encrypted = true;
            }
        }

        // Returns true if this string is currently encrypted, false otherwise.
        bool is_encrypted() const
        {
            return m_encrypted;
        }

    private:

        // Local storage for the string. Call is_encrypted() to check whether or
        // not the string is currently obfuscated.
        char m_data[N];

        // Whether data is currently encrypted
        bool m_encrypted{ true };
    };

    // This function exists purely to extract the number of elements 'N' in the
    // array 'data'
    template <size_type N, key_type KEY = AY_OBFUSCATE_DEFAULT_KEY>
    constexpr auto make_obfuscator(const char(&data)[N])
    {
        return obfuscator<N, KEY>(data);
    }
}

// Obfuscates the string 'data' at compile-time and returns a reference to a
// ay::obfuscated_data object with global lifetime that has functions for
// decrypting the string and is also implicitly convertable to a char*


// Obfuscates the string 'data' with 'key' at compile-time and returns a
// reference to a ay::obfuscated_data object with global lifetime that has
// functions for decrypting the string and is also implicitly convertable to a
// char*
#define SK(data, key) \
	[]() -> ay::obfuscated_data<sizeof(data)/sizeof(data[0]), key^ 0x0000a0a010a00 ^ 0x0000aacc ^ 0x0000a0a010a00 ^ 0x0000aacc>& { \
		static_assert(sizeof(decltype(key)) == sizeof(ay::key_type), "key must be a 64 bit unsigned integer"); \
		constexpr auto n = sizeof(data)/sizeof(data[0]); \
		constexpr auto obfuscator = ay::make_obfuscator<n, key^ 0x0000a0a010a00 ^ 0x0000aacc ^ 0x0000a0a010a00 ^ 0x0000aacc>(data); \
		static auto obfuscated_data = ay::obfuscated_data<n, key ^ 0x0000a0a010a00 ^ 0x0000aacc ^ 0x0000a0a010a00 ^ 0x0000aacc>(obfuscator); \
		return obfuscated_data; \
	}()
#define S(data) SK(data, AY_OBFUSCATE_DEFAULT_KEY ^ 0x000000a1 ^ 0x0000aacc ^ 0x0000aacc ^ 0x0000aacc^ 0x0000a0a010a00 ^ 0x0000aacc)
/* -------------------------------- LICENSE ------------------------------------
Public Domain (http://www.unlicense.org)
This is free and unencumbered software released into the public domain.
Anyone is free to copy, modify, publish, use, compile, sell, or distribute this
software, either in source code form or as a compiled binary, for any purpose,
commercial or non-commercial, and by any means.
In jurisdictions that recognize copyright laws, the author or authors of this
software dedicate any and all copyright interest in the software to the public
domain. We make this dedication for the benefit of the public at large and to
the detriment of our heirs and successors. We intend this dedication to be an
overt act of relinquishment in perpetuity of all present and future rights to
this software under copyright law.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR o PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
----------------------------------------------------------------------------- */