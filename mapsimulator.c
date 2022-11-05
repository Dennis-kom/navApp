#include<stdio.h>
#include "glob.h"
#include "map.h"
#include "utils.h"


int buildMap() {

	FILE *mapFile;
	char *test = "test";
	char mapRaw[MAPSPAN*MAPSPAN];
	int c;
	int bind = 0;
	while (bind < MAPSPAN){
		for (int row = 0; row < MAPSPAN; row++) {
			for (int col = 0; col < MAPSPAN; col++) {
				mapRaw[bind] = intToChar(row);
				bind++;
				mapRaw[bind] = (char)95;
				bind++;
				mapRaw[bind] = intToChar(col);
				bind++;
				mapRaw[bind] = (char)62;
				bind++;

			}
		}
		bind++;
	}
	mapRaw[MAPSPAN-1] = '\0';
	
	for (int i = 0; i < MAPSPAN; i++)
		printf("%c", mapRaw[i]);

	if (mapFile = fopen("mapfile.txt", "w") == NULL) {
	
		printf("Unable to open raw content of map file!\n");
		return -1;
	
	}
	else {
		fprintf(stdout, test);
		//for (int index = 0; index < MAPSPAN; index++) {
			//if (fputc((int)mapRaw[index], mapFile) == EOF)
				//return -1;
			//putc((int)mapRaw[index], mapFile);
		//}
		
	
	}

	fclose(mapFile);



}