			for (int i = 0; i < 25; i++)
				if (driver.read<__int32>(driver.base_address + (i * 0x1000) + 0x250) == 0x6F41C00)
				{
					va_text = driver.base_address + ((i + 1) * 0x1000);
				}
