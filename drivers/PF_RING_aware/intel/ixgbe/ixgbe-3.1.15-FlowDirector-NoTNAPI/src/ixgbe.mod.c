#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xca5bc4d1, "module_layout" },
	{ 0x61ade042, "kmalloc_caches" },
	{ 0xb8952e9c, "pci_bus_read_config_byte" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x603a062a, "pci_enable_sriov" },
	{ 0x64cd003a, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb85f3bbe, "pv_lock_ops" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0x2b1ea21b, "skb_pad" },
	{ 0x1b51953e, "page_address" },
	{ 0xba27cea9, "dev_set_drvdata" },
	{ 0x2d37342e, "cpu_online_mask" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb59cd00a, "dma_set_mask" },
	{ 0x2c4b8b06, "napi_complete" },
	{ 0x246fcd96, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf88a41ba, "pci_disable_msix" },
	{ 0xd553b02, "netif_carrier_on" },
	{ 0x87a45ee9, "_raw_spin_lock_bh" },
	{ 0x4a3fd066, "pci_disable_sriov" },
	{ 0x611832cc, "ethtool_op_get_sg" },
	{ 0x8949858b, "schedule_work" },
	{ 0xa40a665d, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x3fec048f, "sg_next" },
	{ 0x6ad6e329, "x86_dma_fallback_dev" },
	{ 0xed4e1335, "driver_for_each_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9e1bdc28, "init_timer_key" },
	{ 0x999e8297, "vfree" },
	{ 0x9a10f02a, "pci_bus_write_config_word" },
	{ 0x535823b9, "dma_pool_destroy" },
	{ 0x47c7b0d2, "cpu_number" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x17fad347, "__alloc_pages_nodemask" },
	{ 0x6107b71, "pci_dev_driver" },
	{ 0x268e0664, "netif_napi_del" },
	{ 0x7d11c268, "jiffies" },
	{ 0x39b63992, "netif_rx" },
	{ 0xd1ef871f, "__pskb_pull_tail" },
	{ 0x644f1abc, "pci_set_master" },
	{ 0x2c370b7d, "dca3_get_tag" },
	{ 0xe1bc7ede, "del_timer_sync" },
	{ 0x2bc95bd4, "memset" },
	{ 0x1e17ab0b, "pci_enable_pcie_error_reporting" },
	{ 0x2e471f01, "dca_register_notify" },
	{ 0xe3e458fd, "pci_enable_msix" },
	{ 0x2c963f1b, "pci_restore_state" },
	{ 0x8006c614, "dca_unregister_notify" },
	{ 0xad9bd82c, "dev_err" },
	{ 0xfe362fd6, "dev_addr_del" },
	{ 0x50eedeb8, "printk" },
	{ 0xa2f5ca2a, "ethtool_op_get_link" },
	{ 0xab51022c, "ethtool_op_set_flags" },
	{ 0xdd61eb4, "free_netdev" },
	{ 0xb6ed1e53, "strncpy" },
	{ 0xdaba1141, "register_netdev" },
	{ 0xb4390f9a, "mcount" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x4693fcff, "dev_close" },
	{ 0xce095088, "mod_timer" },
	{ 0x9b491c93, "netif_set_real_num_tx_queues" },
	{ 0xa7e255, "netif_napi_add" },
	{ 0x219acf11, "dma_pool_free" },
	{ 0xbfcacb59, "dma_release_from_coherent" },
	{ 0xfda85a7d, "request_threaded_irq" },
	{ 0xe0219930, "dca_add_requester" },
	{ 0x212be717, "skb_pull" },
	{ 0x99aacbf9, "ethtool_op_get_flags" },
	{ 0x1ed1de09, "dev_kfree_skb_any" },
	{ 0xdb7d2224, "contig_page_data" },
	{ 0x9fa25542, "dma_alloc_from_coherent" },
	{ 0xe5a17274, "dev_open" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xc0389a99, "pci_select_bars" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x46e6cdd, "netif_device_attach" },
	{ 0xbb321182, "napi_gro_receive" },
	{ 0xd3fa7a74, "_dev_info" },
	{ 0x240e760c, "dev_addr_add" },
	{ 0xa9461eb0, "pci_disable_link_state" },
	{ 0xf7575791, "netif_device_detach" },
	{ 0x12c9bcd1, "__alloc_skb" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0xc00918ed, "pci_bus_read_config_word" },
	{ 0xa9fc140a, "ethtool_op_set_sg" },
	{ 0x1b134b94, "__napi_schedule" },
	{ 0x6223cafb, "_raw_spin_unlock_bh" },
	{ 0xc3c7f921, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x579fbcd2, "cpu_possible_mask" },
	{ 0xce5f7e19, "kfree_skb" },
	{ 0x335b2efe, "ethtool_ntuple_flush" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x6fc2a1f0, "eth_type_trans" },
	{ 0x7a61d15b, "dma_pool_alloc" },
	{ 0xa22033d9, "pskb_expand_head" },
	{ 0x54188ca8, "netdev_features_change" },
	{ 0xcec9c2a4, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xabc328f0, "kmem_cache_alloc_trace" },
	{ 0x6443d74d, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xfc69e635, "pci_set_power_state" },
	{ 0xed95ea5d, "eth_validate_addr" },
	{ 0x1188a316, "pci_disable_pcie_error_reporting" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x90395a7f, "___pskb_trim" },
	{ 0xd1329880, "param_array_ops" },
	{ 0x9ea3450f, "pci_disable_msi" },
	{ 0x4db7b6a8, "dma_supported" },
	{ 0xedc03953, "iounmap" },
	{ 0x1df65373, "pci_prepare_to_sleep" },
	{ 0xe726fb17, "__pci_register_driver" },
	{ 0x2288378f, "system_state" },
	{ 0xe3b22412, "put_page" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x3566b87, "dev_warn" },
	{ 0xca212ed, "unregister_netdev" },
	{ 0x529e7e26, "ethtool_op_get_tso" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x1bbc70f7, "pci_enable_msi_block" },
	{ 0xdf58c688, "__netif_schedule" },
	{ 0x7b4d76b1, "consume_skb" },
	{ 0x22baa49, "dca_remove_requester" },
	{ 0xf24b45a, "pci_enable_device_mem" },
	{ 0xbbf0cc9, "vlan_gro_receive" },
	{ 0xd6eb9777, "skb_put" },
	{ 0xa5fe2087, "pci_wake_from_d3" },
	{ 0x66725887, "pci_release_selected_regions" },
	{ 0x8e93e36c, "pci_request_selected_regions" },
	{ 0xa0208e02, "irq_set_affinity_hint" },
	{ 0xf90ba351, "__skb_tx_hash" },
	{ 0x13095525, "param_ops_uint" },
	{ 0x9b213346, "dma_pool_create" },
	{ 0xa11820cb, "skb_copy_bits" },
	{ 0x6678d8f4, "dev_get_drvdata" },
	{ 0x23fd3028, "vmalloc_node" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xbdb53c5a, "dma_ops" },
	{ 0x47552420, "device_set_wakeup_enable" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xe554d8e3, "pci_save_state" },
	{ 0x5b45d324, "__vlan_hwaccel_rx" },
	{ 0xe914e41e, "strcpy" },
	{ 0x5ef6a0f0, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dca";

MODULE_ALIAS("pci:v00008086d000010B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001508sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010ECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001517sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001507sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001514sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000151Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000152Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001529sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001512sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001528sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EB3694FB2B03DDCDB54A526");