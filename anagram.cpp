#include <iostream>

#define ALPHABET ('z' - 'a' + 1)
#define CREATE_HISTOGRAM(str)              \
    int hist_##str[ALPHABET];              \
    for (int j = 0; j < ALPHABET; ++j) {   \
        hist_##str[j] = 0;                 \
    }                                      \
    for (int i = 0; i < str.size(); ++i) { \
        ++hist_##str[str[i] - 'a'];        \
    }

bool isAnagram(std::string s, std::string t)
{
    CREATE_HISTOGRAM(s);
    CREATE_HISTOGRAM(t);
    for (int j = 0; j < ALPHABET; ++j) {
        if (hist_s[j] != hist_t[j]) {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[])
{
    std::cout << "Hello, world!" << std::endl;
    std::string s = "racecar", t = "carrace";
    printf(isAnagram(s, t) ? "true\n" : "false\n");
    s = "jar", t = "jam";
    printf(isAnagram(s, t) ? "true\n" : "false\n");
    return 0;
}
