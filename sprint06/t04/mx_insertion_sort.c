int mx_strlen(char *s);

int mx_insertion_sort(char **arr, int size);

int mx_insertion_sort(char **arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i; j > 0 && mx_strlen(arr[j - 1]) > mx_strlen(arr[j]); j--) {
            char *tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            count++;
        }
    }
    return count;
}

