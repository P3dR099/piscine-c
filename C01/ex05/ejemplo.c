void largo_cadena(char cadena[])
{
	int largo=0
	while (cadena[largo]!='\0') largo++;
	return largo;
}


int main() {
	largo_cadena('ex');
}
