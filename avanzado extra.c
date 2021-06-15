	/*printf("gap: %d\n", gap);*/

	/*unsigned int candidato, pos1, pos2;*/

	/*while (pos + gap <= final)
	*{
	*	if (array[pos] > array[pos + gap])
	*	{
	*		swap_elements(array, pos, pos + gap);
	*	}
	*	pos++;
	*}
	*for (pos1 = 0; pos1 + gap < final; pos1++)
	*{
	*	candidato = pos1;
	*	pos2 = pos1 + gap;
	*	while (array[pos2])
	*	{
	*		if (array[pos2] < array[candidato])
	*			candidato = pos2;
	*		pos2+= gap;
	*	}
	*	if (candidato != pos1)
		{
	*		swap_elements(array, candidato, pos1);
	*	}
	}*/

	/*holder = 0;
	*h2 = 0;
	*aux = holder + gap;
	*while (h2 + gap <= fin)
	*{
	*	while (holder + gap <= fin)
	*	{
	*		if (array[holder + gap] >= array[holder])
	*			holder = holder + gap;
	*		else
	*		{
	*			while ((aux - gap >= 0) && array[aux] < array[aux - gap])
	*			{
	*				swap_elements(array, aux - gap, aux);
	*				aux-= gap;
	*			}
	*		}
	*		aux = holder + gap;
	*	}
		h2++;
	}*/