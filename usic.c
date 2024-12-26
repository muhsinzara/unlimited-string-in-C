char *getUS()
{
    size_t size = 2;
    size_t length = 0;
    char *buffer = (char *)malloc(size);
    if (!buffer)
    {
        fprintf(stderr, "Failed to allocate memory\n");
        return NULL;
    }

    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        if (length + 1 >= size)
        {
            size *= 2;
            char *newBuffer = (char *)realloc(buffer, size);
            if (!newBuffer)
            {
                fprintf(stderr, "Failed to reallocate memory\n");
                free(buffer);
                return NULL;
            }
            buffer = newBuffer;
        }
        buffer[length++] = (char)ch;
    }
    buffer[length] = '\0';

    return buffer;
}