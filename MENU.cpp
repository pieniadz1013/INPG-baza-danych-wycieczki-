// niekompletne, lecz i tak piekne menu
//raczej nie dziala 
// zle podane argumenty przy funkcjach! nie powinny byc typu Drzewo*, lecz typu Wezel*!
// menu zrobione tak, jakby funkcje przyjmowaly typ Wezel*

void menu(Wezel* korzen)
{

	int petla = TRUE;
	char wybor;

	while(petla)
	{
		
		puts("Wybierz co chcesz zrobic:");
		puts("d - dodaj now¹ wycieczke do bazy danych");
		puts("w - wyswietl wszystkie wycieczki");
		puts("p- wyswietl najtansza wycieczke");
		puts("o- wyswietl najdrozsza wycieczke");
		puts("l- pokaz liczbe pozycji w bazie");
		puts("s- wyszukaj wycieczke po cenie");
		puts("k- wyszukaj wycieczke po kraju");
		puts("h- okresl wysokosc drzewa");
		puts("q - koniec");
		// niekompletne
		printf("> ");

		scanf("%c", &wybor);
		
		switch(wybor)
		{
			case 'd':
				Wycieczka* pozycja; 
				printf("Podaj cene:  ");
				scanf("%f", pozycja.cena);
				printf("Podaj kraj:  ");
				fgets(pozycja.kraj, DLUGOSC, stdin);
				printf("Podaj miasto:  ");
				fgets(pozycja.miasto, DLUGOSC, stdin);
				printf("Podaj date:  ");
				fgets(pozycja.data, DLUGOSC, stdin);
				Insert(&korzen, pozycja);
				break;
			case 'w':
				Inorder(korzen);
				break;
			case 'p':
				WyszukajMin(korzen);
				break;
			case 'o':
				WyszukajMax(korzen);
				break;
			case 'l':
				printf("Ilosc pozycji: %d\n",Liczba_wezlow(korzen));
				break;
			case 'k':
				char kraj[DLUGOSC];
				printf("Wpisz kraj:\n");
				scanf("%s", kraj);
				szukajkraj(korzen, kraj);
				break;
			case 'h':
				printf("Wysokosc drzewa wynosi %d\n", Wysokosc_drzewa(korzen));
				break;
			case 'q':
				// tutaj trzeba dokonczyc
				break;
			default: 
				puts("Niepoprawny znak\n");
		}
		getchar();
	
	}