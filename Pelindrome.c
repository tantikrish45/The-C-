#include<stdio.h>
#include<string.h>
main()
{

    char name[200];

    printf("Enter any String : ");
    scanf("%[^\n]", &name);
    printf("\n");
    printf("String : %s", name);

	for (int i = 0; name[i] != '\0'; i++)
    {
       
	   
    }

	// if()
	
    // {
	//  printf("\nvalied pelindrome");
    // }
    //  else
    // {
	//  printf("\nEnvalied pelindrome");
	// }

	useEffect(() => {
  let cancelled = false;
  let loadedCount = 0;
  const images: HTMLImageElement[] = [];

  for (let i = 1; i <= FRAME_COUNT; i++) {
    const img = new Image();
    img.src = framePath(i);

    img.onload = img.onerror = () => {
      if (cancelled) return;

      loadedCount++;
      const progress = loadedCount / FRAME_COUNT;
      setLoadProgress(progress);

      if (loadedCount === FRAME_COUNT) {
        loadedRef.current = true;
        setLoaded(true);
      }
    };

    images.push(img);
  }

  framesRef.current = images;

  return () => {
    cancelled = true;
  };
}, []);
}
