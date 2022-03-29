#include <zlib.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){
    //存储压缩后的数据
    Bytef compresed[100] = {0};
    uLongf compressed_len;
	
    const Bytef data[] = "helloworld";
    uLong data_len = (uLong)sizeof(data);
	//存储解压后的数据
    Bytef uncompressed_data[100];
    uLong uncompressed_data_len;

    //compressed_len 获取压缩后的数据长度
    compress(compresed,&compressed_len,data,data_len);

    //uncompressed_data_len 获取解压缩后的数据的长度
  uncompress(uncompressed_data,&uncompressed_data_len,compresed,compressed_len);

    printf("%ld :%s\n",uncompressed_data_len,uncompressed_data);

    return 0;
}

