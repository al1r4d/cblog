#include <stdio.h>
#include <dirent.h>
#include <string.h>

int listdir(const char *path) 
{
  struct dirent *entry;
  DIR *dp;

  dp = opendir(path);
  if (dp == NULL) 
  {
    perror("opendir");
    return -1;
  }

  while((entry = readdir(dp)))
  {
    // Memeriksa apakah nama folder mengandung substring "_posts"
    if (strstr(entry->d_name, "_posts") != NULL)
    {
      DIR *sub_dp;
      struct dirent *sub_entry;

      sub_dp = opendir(entry->d_name);
      if (sub_dp == NULL)
      {
        perror("opendir");
        continue;
      }

      printf("\n%s:\n", entry->d_name);

      while((sub_entry = readdir(sub_dp)))
      {
        // Memeriksa apakah file memiliki ekstensi ".md"
        if (strstr(sub_entry->d_name, ".md") != NULL)
        {
          FILE *fp;
          char filepath[1024];
          char buffer[1024];

          sprintf(filepath, "%s/%s", entry->d_name, sub_entry->d_name);
          fp = fopen(filepath, "r");

          if (fp == NULL)
          {
            perror("fopen");
            continue;
          }

          printf("- %s\n", sub_entry->d_name);

          fclose(fp);
        }
      }

      closedir(sub_dp);
    }
  }

  closedir(dp);
  return 0;
}

int main(int argc, char **argv) {
  int counter = 1;

  if (argc == 1)
	listdir(".");

  while (++counter <= argc) {
    printf("\nListing %s...\n", argv[counter-1]);
    listdir(argv[counter-1]);
  }

  return 0;
}

