/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED BY 'src/generator.ml'.
 * ANY CHANGES YOU MAKE TO THIS FILE WILL BE LOST.
 *
 * Copyright (C) 2009 Red Hat Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

extern int guestfs_launch (guestfs_h *handle);
extern int guestfs_wait_ready (guestfs_h *handle);
extern int guestfs_kill_subprocess (guestfs_h *handle);
extern int guestfs_add_drive (guestfs_h *handle, const char *filename);
extern int guestfs_add_cdrom (guestfs_h *handle, const char *filename);
extern int guestfs_config (guestfs_h *handle, const char *qemuparam, const char *qemuvalue);
extern int guestfs_set_qemu (guestfs_h *handle, const char *qemu);
extern const char *guestfs_get_qemu (guestfs_h *handle);
extern int guestfs_set_path (guestfs_h *handle, const char *path);
extern const char *guestfs_get_path (guestfs_h *handle);
extern int guestfs_set_append (guestfs_h *handle, const char *append);
extern const char *guestfs_get_append (guestfs_h *handle);
extern int guestfs_set_autosync (guestfs_h *handle, int autosync);
extern int guestfs_get_autosync (guestfs_h *handle);
extern int guestfs_set_verbose (guestfs_h *handle, int verbose);
extern int guestfs_get_verbose (guestfs_h *handle);
extern int guestfs_is_ready (guestfs_h *handle);
extern int guestfs_is_config (guestfs_h *handle);
extern int guestfs_is_launching (guestfs_h *handle);
extern int guestfs_is_busy (guestfs_h *handle);
extern int guestfs_get_state (guestfs_h *handle);
extern int guestfs_set_busy (guestfs_h *handle);
extern int guestfs_set_ready (guestfs_h *handle);
extern int guestfs_end_busy (guestfs_h *handle);
extern int guestfs_mount (guestfs_h *handle, const char *device, const char *mountpoint);
extern int guestfs_sync (guestfs_h *handle);
extern int guestfs_touch (guestfs_h *handle, const char *path);
extern char *guestfs_cat (guestfs_h *handle, const char *path);
extern char *guestfs_ll (guestfs_h *handle, const char *directory);
extern char **guestfs_ls (guestfs_h *handle, const char *directory);
extern char **guestfs_list_devices (guestfs_h *handle);
extern char **guestfs_list_partitions (guestfs_h *handle);
extern char **guestfs_pvs (guestfs_h *handle);
extern char **guestfs_vgs (guestfs_h *handle);
extern char **guestfs_lvs (guestfs_h *handle);
extern struct guestfs_lvm_pv_list *guestfs_pvs_full (guestfs_h *handle);
extern struct guestfs_lvm_vg_list *guestfs_vgs_full (guestfs_h *handle);
extern struct guestfs_lvm_lv_list *guestfs_lvs_full (guestfs_h *handle);
extern char **guestfs_read_lines (guestfs_h *handle, const char *path);
extern int guestfs_aug_init (guestfs_h *handle, const char *root, int flags);
extern int guestfs_aug_close (guestfs_h *handle);
extern int guestfs_aug_defvar (guestfs_h *handle, const char *name, const char *expr);
extern struct guestfs_int_bool *guestfs_aug_defnode (guestfs_h *handle, const char *name, const char *expr, const char *val);
extern char *guestfs_aug_get (guestfs_h *handle, const char *path);
extern int guestfs_aug_set (guestfs_h *handle, const char *path, const char *val);
extern int guestfs_aug_insert (guestfs_h *handle, const char *path, const char *label, int before);
extern int guestfs_aug_rm (guestfs_h *handle, const char *path);
extern int guestfs_aug_mv (guestfs_h *handle, const char *src, const char *dest);
extern char **guestfs_aug_match (guestfs_h *handle, const char *path);
extern int guestfs_aug_save (guestfs_h *handle);
extern int guestfs_aug_load (guestfs_h *handle);
extern char **guestfs_aug_ls (guestfs_h *handle, const char *path);
extern int guestfs_rm (guestfs_h *handle, const char *path);
extern int guestfs_rmdir (guestfs_h *handle, const char *path);
extern int guestfs_rm_rf (guestfs_h *handle, const char *path);
extern int guestfs_mkdir (guestfs_h *handle, const char *path);
extern int guestfs_mkdir_p (guestfs_h *handle, const char *path);
extern int guestfs_chmod (guestfs_h *handle, int mode, const char *path);
extern int guestfs_chown (guestfs_h *handle, int owner, int group, const char *path);
extern int guestfs_exists (guestfs_h *handle, const char *path);
extern int guestfs_is_file (guestfs_h *handle, const char *path);
extern int guestfs_is_dir (guestfs_h *handle, const char *path);
extern int guestfs_pvcreate (guestfs_h *handle, const char *device);
extern int guestfs_vgcreate (guestfs_h *handle, const char *volgroup, char * const* const physvols);
extern int guestfs_lvcreate (guestfs_h *handle, const char *logvol, const char *volgroup, int mbytes);
extern int guestfs_mkfs (guestfs_h *handle, const char *fstype, const char *device);
extern int guestfs_sfdisk (guestfs_h *handle, const char *device, int cyls, int heads, int sectors, char * const* const lines);
extern int guestfs_write_file (guestfs_h *handle, const char *path, const char *content, int size);
extern int guestfs_umount (guestfs_h *handle, const char *pathordevice);
extern char **guestfs_mounts (guestfs_h *handle);
extern int guestfs_umount_all (guestfs_h *handle);
extern int guestfs_lvm_remove_all (guestfs_h *handle);
extern char *guestfs_file (guestfs_h *handle, const char *path);
extern char *guestfs_command (guestfs_h *handle, char * const* const arguments);
extern char **guestfs_command_lines (guestfs_h *handle, char * const* const arguments);
extern struct guestfs_stat *guestfs_stat (guestfs_h *handle, const char *path);
extern struct guestfs_stat *guestfs_lstat (guestfs_h *handle, const char *path);
extern struct guestfs_statvfs *guestfs_statvfs (guestfs_h *handle, const char *path);
extern char **guestfs_tune2fs_l (guestfs_h *handle, const char *device);
extern int guestfs_blockdev_setro (guestfs_h *handle, const char *device);
extern int guestfs_blockdev_setrw (guestfs_h *handle, const char *device);
extern int guestfs_blockdev_getro (guestfs_h *handle, const char *device);
extern int guestfs_blockdev_getss (guestfs_h *handle, const char *device);
extern int guestfs_blockdev_getbsz (guestfs_h *handle, const char *device);
extern int guestfs_blockdev_setbsz (guestfs_h *handle, const char *device, int blocksize);
extern int64_t guestfs_blockdev_getsz (guestfs_h *handle, const char *device);
extern int64_t guestfs_blockdev_getsize64 (guestfs_h *handle, const char *device);
extern int guestfs_blockdev_flushbufs (guestfs_h *handle, const char *device);
extern int guestfs_blockdev_rereadpt (guestfs_h *handle, const char *device);
extern int guestfs_upload (guestfs_h *handle, const char *filename, const char *remotefilename);
extern int guestfs_download (guestfs_h *handle, const char *remotefilename, const char *filename);
extern char *guestfs_checksum (guestfs_h *handle, const char *csumtype, const char *path);
extern int guestfs_tar_in (guestfs_h *handle, const char *tarfile, const char *directory);
extern int guestfs_tar_out (guestfs_h *handle, const char *directory, const char *tarfile);
extern int guestfs_tgz_in (guestfs_h *handle, const char *tarball, const char *directory);
extern int guestfs_tgz_out (guestfs_h *handle, const char *directory, const char *tarball);
extern int guestfs_mount_ro (guestfs_h *handle, const char *device, const char *mountpoint);
extern int guestfs_mount_options (guestfs_h *handle, const char *options, const char *device, const char *mountpoint);
extern int guestfs_mount_vfs (guestfs_h *handle, const char *options, const char *vfstype, const char *device, const char *mountpoint);
extern char *guestfs_debug (guestfs_h *handle, const char *subcmd, char * const* const extraargs);
extern int guestfs_lvremove (guestfs_h *handle, const char *device);
extern int guestfs_vgremove (guestfs_h *handle, const char *vgname);
extern int guestfs_pvremove (guestfs_h *handle, const char *device);
extern int guestfs_set_e2label (guestfs_h *handle, const char *device, const char *label);
extern char *guestfs_get_e2label (guestfs_h *handle, const char *device);
extern int guestfs_set_e2uuid (guestfs_h *handle, const char *device, const char *uuid);
extern char *guestfs_get_e2uuid (guestfs_h *handle, const char *device);
extern int guestfs_fsck (guestfs_h *handle, const char *fstype, const char *device);
extern int guestfs_zero (guestfs_h *handle, const char *device);
extern int guestfs_grub_install (guestfs_h *handle, const char *root, const char *device);
extern int guestfs_cp (guestfs_h *handle, const char *src, const char *dest);
extern int guestfs_cp_a (guestfs_h *handle, const char *src, const char *dest);
extern int guestfs_mv (guestfs_h *handle, const char *src, const char *dest);
extern int guestfs_drop_caches (guestfs_h *handle, int whattodrop);
extern char *guestfs_dmesg (guestfs_h *handle);
extern int guestfs_ping_daemon (guestfs_h *handle);
extern int guestfs_equal (guestfs_h *handle, const char *file1, const char *file2);
extern char **guestfs_strings (guestfs_h *handle, const char *path);
extern char **guestfs_strings_e (guestfs_h *handle, const char *encoding, const char *path);
extern char *guestfs_hexdump (guestfs_h *handle, const char *path);
extern int guestfs_zerofree (guestfs_h *handle, const char *device);
extern int guestfs_pvresize (guestfs_h *handle, const char *device);
extern int guestfs_sfdisk_N (guestfs_h *handle, const char *device, int n, int cyls, int heads, int sectors, const char *line);
extern char *guestfs_sfdisk_l (guestfs_h *handle, const char *device);
extern char *guestfs_sfdisk_kernel_geometry (guestfs_h *handle, const char *device);
extern char *guestfs_sfdisk_disk_geometry (guestfs_h *handle, const char *device);
