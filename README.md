# Pigeoncoin Miner

An optimized fork of ccminer developed for Pigeoncoin.

Based on Christian Buchner's &amp; Christian H.'s CUDA project, no longer active on github since 2014.

Check the [README.txt](README.txt) for the additions


# Example .bat file fail over script

This is the example start.bat file provided with the miner. Feel free to use this or your own .bat file.

	:MINE
	ccminer -a x16s -o stratum+tcp://blockcruncher.com:3636 -u PN7CLWzxzsDNWrbrEhLkFKHaKVUbg2UGM5 -p test,c=PGN
	GOTO :MINE

- Replace the pool connection information with your preferred Pigeoncoin pool
- Replace the wallet address with your own
- Most Pigeoncoin pools can have anything after -p, generally it is used as a worker name, and currency (c=PGN)
- Set Stratum difficulty with d=X
- Set Intensity with -i
- Set Donation % with --donate



## Donation Addresses

Consider supporting the contributors to this miner by donating to the following addresses:

- PGN: PN7CLWzxzsDNWrbrEhLkFKHaKVUbg2UGM5

Built from source on Windows 10.


Compile on Linux
----------------

Please see [INSTALL](https://github.com/tpruvot/ccminer/blob/linux/INSTALL) file or [project Wiki](https://github.com/tpruvot/ccminer/wiki/Compatibility)
