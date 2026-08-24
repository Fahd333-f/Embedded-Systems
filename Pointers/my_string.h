void print_string(char *str);
void string_length(const char *str);
void to_upper(const char *str);
void to_lower(const char *str);
void toggle_string(const char *str);
char *string_copy(const char *source, char *dest);
int string_compare(char *str1, char *str2);
struct employee
{
    int id;
    float salary;
    char name[50];
};
void take_struct(struct employee *emp);
void print_struct(struct employee *emp);
