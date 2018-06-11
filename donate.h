#ifndef DONATE_H
#define DONATE_H

/*
 * Default dev donation is 1.
 * Minimum dev donation is 0.
 * You can set the donation percentage higher by using the --donate flag.
 *
 * Example of how it works for the setting of 1:
 * You miner will mine into your usual pool for 99 minutes, then switch to the
 * developer's pool for 1 minute.
 *
 * If you plan to mine with 0 donation, please consider
 * making a one-time donation to the developers' wallet:
 *
 * PGN donation address: PN7CLWzxzsDNWrbrEhLkFKHaKVUbg2UGM5
 *
 */
#define MIN_DEV_DONATE_PERCENT 0


// 100 minutes
#define DONATE_CYCLE_TIME 6000

#endif
