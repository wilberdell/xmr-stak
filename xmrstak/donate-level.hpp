#pragma once

/*
 * DEV DONATION SETTING
 * This setting is a percentage of your hashing power that the miner donates to the developers of this app.
 * It can be 0.0 if you don't want to help the developers. The default setting of 2.0 means that
 * the miner will mine into your usual pool for 98 minutes, then switch to the developer's pool for 2.0 minutes.
 * Switching pools is instant and it only happens after a successful connection, so you don't lose any hash time.
 *
 * If you plan on changing this setting to 0.0, please consider making a one time donation to our wallets:
 * fireice-uk:
 * 46E6iLik12TWM4gpkTWXbkUjDxJ9q1nw7cdJ6tNykNWFQVyH8soHed1AfrPbj2KE1KYausbRyVVUm7rCbjmHLNkE3BRQcs7
 * psychocrypt:
 * 46E6iLik12TWM4gpkTWXbkUjDxJ9q1nw7cdJ6tNykNWFQVyH8soHed1AfrPbj2KE1KYausbRyVVUm7rCbjmHLNkE3BRQcs7
 *
 * Thank you for your support.
 */

constexpr double fDevDonationLevel = 2.0 / 100.0;
