/**
  ******************************************************************************
  * @file    matrix_app.c
  * @author  Hare
  * @version V1.0
  * @date    
  * @brief    
  ******************************************************************************
  */

#include "matrix_app.h"

#include "SK6812_drv.h"
#include "RGB_MatrixGFX.h"
#include <stdlib.h>
#include <time.h>

RGB_pixel_t RGB_Matrix1_Buff[RGB_MATRIX_BUFF_SIZE];

RGB_MatrixGFX_Handle_t RGB_MatrixGFX_handle1;

/**
  * @brief  
  * @param  None
  * @retval None
  */
void RGB_Matrix_Init(void)
{
  SK6812_drvInit();
  
  //获取随机数seed
	srand(3265154);
  
  RGB_MatrixGFX_handle1.p_displayBuff = RGB_Matrix1_Buff;
  RGB_MatrixGFX_handle1.buffSize = RGB_MATRIX_BUFF_SIZE;
  RGB_MatrixGFX_handle1.width = RGB_MATRIX_WIDTH;
  RGB_MatrixGFX_handle1.height = RGB_MATRIX_HEIGHT;
  RGB_MatrixGFX_handle1.p_sendFunc = SK6812_sendBuff1;
  
  
}

void RGB_Matrix_loop(void)
{
	static int n = 0;
  RGB_pixel_t color = {rand()%10, rand()%10, rand()%10};
  
  
	
	RGB_MatrixGFX_clean(&RGB_MatrixGFX_handle1);
  
//  RGB_MatrixGFX_fillRect(&RGB_MatrixGFX_handle1, n, 1, 
//                         15, 5, color);
  oled_drawstring(&RGB_MatrixGFX_handle1, n, 0, 
                             "<<<<<<<<<<<<", color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,4+n,0,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,4+n,6,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,10+n,0,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,10+n,6,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,16+n,0,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,16+n,6,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,22+n,0,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,22+n,6,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,28+n,0,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,28+n,6,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,34+n,0,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,34+n,6,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,40+n,0,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,40+n,6,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,46+n,0,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,46+n,6,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,52+n,0,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,52+n,6,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,58+n,0,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,58+n,6,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,64+n,0,color);
	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1,64+n,6,color);
	if(n == 0)
	{
			n = 5;
	}
	else
	{
			n--;
	}
	

//	RGB_MatrixGFX_fillRect(&RGB_MatrixGFX_handle1, 0, 0, 
//                         RGB_MATRIX_WIDTH, RGB_MATRIX_HEIGHT, color);
	
	
	
//	RGB_MatrixGFX_drawPixel(&RGB_MatrixGFX_handle1, 2, 1, color);
  
  RGB_MatrixGFX_update(&RGB_MatrixGFX_handle1);
  
}


