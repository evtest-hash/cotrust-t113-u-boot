#ifndef _FB_SPI_NAND_H_
#define _FB_SPI_NAND_H_

/**
 * fastboot_spi_nand_get_part_info() - Lookup SPI NAND partition by name
 *
 * @part_name: Named device to lookup
 * @part_info: Pointer to returned part_info pointer
 * @response: Pointer to fastboot response buffer
 *
 * Return: 0 on success, negative value on error
 */
int fastboot_spi_nand_get_part_info(const char *part_name,
                                    struct part_info **part_info, char *response);

/**
 * fastboot_spi_nand_flash_write() - Write image to SPI NAND for fastboot
 *
 * @cmd: Named device to write image to
 * @download_buffer: Pointer to image data
 * @download_bytes: Size of image data
 * @response: Pointer to fastboot response buffer
 */
void fastboot_spi_nand_flash_write(const char *cmd, void *download_buffer,
                                   uint32_t download_bytes, char *response);

/**
 * fastboot_spi_nand_erase() - Erase SPI NAND for fastboot
 *
 * @cmd: Named device to erase
 * @response: Pointer to fastboot response buffer
 */
void fastboot_spi_nand_erase(const char *cmd, char *response);

#endif
