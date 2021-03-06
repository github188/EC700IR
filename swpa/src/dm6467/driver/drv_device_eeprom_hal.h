/**
 * @file   drv_device_eeprom_hal.h
 * @author lijj
 * @date   2013-02-20
 *
 * @brief
 *         EEPROM规划表
 * @note   注意，本文件例举的是uboot和应用程序使用到的比较重要的
 *         地址，不建议应用程序将<自定义的数据>写到这部分空间。
 *         但像版本号这些已经规划好的空间可以读/写。
 *
 *          <pre>
 *          EEPROM空间共128KB，地址范围：0x0 ~ 0x1ffff
 *          本文件列举的地址范围：0x0 ~ 0x2000，如下：
 *          设备信息区：0x0~0x700
 *          设备状态区：0x700~0x800
 *          设备参数区：0x800~0xc00
 *          设备参数备份区： 0xc00~0x1000
 *          设备日志区：0x1000~0x2000
 *          </pre>
 */

#ifndef DRV_DEVICE_EEPROM_HAL_H
#define DRV_DEVICE_EEPROM_HAL_H

#ifdef __cplusplus
extern "C"
{
#endif

// 命名规则：地址：E_ADDR_XX 长度：E_LEN_XX

// 设备信息区 0x0~0x700
#define E_ADDR_MACHINE_SN           0x00000 /**< 设备序列号 */
#define E_LEN_MACHINE_SN            0x100   /**< 设备序列号长度(256 byte) */

#define E_ADDR_UBL_VER              0x00100 /**< Ubl版本号 */
#define E_LEN_UBL_VER               0x100   /**< Ubl版本号长度(256 byte) */

#define E_ADDR_UBOOT_VER            0x00200 /**< Uboot版本号 */
#define E_LEN_UBOOT_VER             0x100   /**< Uboot版本号长度(256 byte) */

#define E_ADDR_MAC_ADDR             0x00300 /**< Mac地址 */
#define E_LEN_MAC_ADDR              0x006   /**< Mac地址长度(6 byte) */

#define E_ADDR_IP_ADDR              0x00310 /**< IP地址 */
#define E_LEN_IP_ADDR               0x004   /**< IP地址长度(4 byte) */

#define E_ADDR_GATEWAY_ADDR         0x00314 /**< 网关 */
#define E_LEN_GATEWAY_ADDR          0x004   /**< 网关长度(4 byte) */

#define E_ADDR_SNMASK_ADDR          0x00318 /**< 子网掩码 */
#define E_LEN_SNMASK_ADDR           0x004   /**< 子网掩码长度(4 byte) */

#define E_ADD_REV1                  0x0031c /**< 保留 */
#define E_LEN_REV1                  (0x00700 - 0x0031c) /**< 保留区长度 */

// 设备状态区 0x700~0x800
#define E_ADDR_LAST_START_STATUS    0x00700 /**< 最近一次启动状态 */
#define E_LEN_LAST_START_STATUS     0x004   /**< 最近一次启动状态长度(4 byte) */

#define E_ADDR_HDD_FLAG             0x00704 /**< 硬盘标志地址 */
#define E_LEN_HDD_FLAG              0x004   /**<  长度　*/

#define E_ADD_REV2                  0x00708 /**< 保留 */
#define E_LEN_REV2                  (0x00800 - 0x00708) /**< 保留区长度 */


// 设备参数区 0x800~0xc00
#define E_ADDR_CRC                  0x00800 /**< 参数区CRC校验 */
#define E_LEN_CRC                   0x004   /**< 参数区CRC校验长度(4 byte) */

#define E_ADDR_FACTORY_FLAG         0x00804 /**< 出厂标记 */
#define E_LEN_FACTORY_FLAG          0x004   /**< 出厂标记长度(4 byte) */

#define E_ADDR_PARAM_VER            0x00808 /**< 参数区版本号 */
#define E_LEN_PARAM_VER             0x004   /**< 参数区版本号长度(4 byte) */

#define E_ADDR_RTM_FLAG             0x0080c /**< RTM标志 */
#define E_LEN_RTM_FLAG              0x004   /**< RRM标志(4 byte) */

#define E_ADDR_START_CNT            0x00810 /**< 启动计数 */
#define E_LEN_START_CNT             0x004   /**< 启动计数长度(4 byte) */

#define E_ADDR_BOOTDELAY            0x00814 /**< Bootdelay值 */
#define E_LEN_BOOTDELAY             0x004   /**< Bootdelay值长度(4 byte) */

#define E_ADDR_LAST_BOOTARG         0x00818 /**< Bootarg值 */
#define E_LEN_LAST_BOOTARG          0x100   /**< Bootarg值长度(256 byte) */

#define E_ADD_REV3                  0x00918 /**< 保留 */
#define E_LEN_REV3                  (0x00c00 - 0x00918) /**< 保留区长度 */

// 设备参数备份区 0xc00~0x01000
#define E_ADDR_PARAM_BACKUP         0x00c00 /**< 设备参数区的备份镜像 */
#define E_LEN_PARAM_BACKUP          0x400   /**< 设备参数区的备份镜像长度(1024 byte) */

// 设备日志区 0x01000~0x02000
#define E_ADDR_START_TABLE          0x01000 /**< 启动时间表 */
#define E_LEN_START_TABLE           0x800   /**< 启动时间表长度(2048 byte) */

#define E_ADDR_UBOOT_LOG            0x01800 /**< Uboot日志表(即黑匣子) */
#define E_LEN_UBOOT_LOG             0x800   /**< Uboot日志表长度(2048 byte) */

// 结束

#ifdef __cplusplus
}
#endif

#endif /* DRV_DEVICE_EEPROM_HAL_H */
